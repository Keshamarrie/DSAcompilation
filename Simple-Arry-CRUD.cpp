#include <iostream>
using namespace std;

string arr[100] = {"kyle", "dorothy", "alyanna", "dave", "tyron"};
int length = 0;
void insert();
void del();
void retrieve();

int main(){
	
	int select;
	bool match = true;
	
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	
	while(!arr[length].empty() && length < arrSize){
		length++;
	}
	
	while(match){
		cout << "1. INSERT \n";
		cout << "2. DELETE \n";
		cout << "3. RETIRIEVE \n";
		cout << "4. EXIT \n\n";
		cout << "Please select: ";
		cin >> select;
		
		switch(select){
			case 1:{
				system("cls");
				insert();
				break;
			}
			case 2:{
				system("cls");
				del();
				break;
			}
			case 3:{
				system("cls");
				retrieve();
				break;
			}
			case 4:{
				cout << "Program finished..." << endl;
				match = false;
				break;
			}
			default:{
				cout << "invalid input!! " << endl;
				system("PAUSE");
				system("cls");
				continue;
			}
		}
	}
	
	return 0;
}

void insert(){
	
	cout << "[ INSERT ] \n\n";
	string name;
	
	cout << endl;
	cout << "Existing array list: ";
	
	for(int i = 0; i < length; i++){
		cout << arr[i];
		if(i < length - 1){
			cout << ", ";
		}else{
			cout << " ";
		}
	}
	cout << endl << endl;
	
	cout << "Enter name to insert: ";
	cin >> name;
	
	arr[length] = name;
	length++;
	
	cout << endl << endl;
	cout << "New array list: ";
	
	for(int k = 0; k < length; k++){
		cout << arr[k];
		if(k < length - 1){
			cout << ", ";
		}else{
			cout << " ";
		}
	}
	cout << endl;
	system("PAUSE");
	system("cls");
}

void del(){
	
	cout << "[ DELETE ] \n\n";
	
	int index;
	
	cout << "Existing array list: ";
	
	for(int i = 0; i < length; i++){
		cout << arr[i];
		if(i < length - 1){
			cout << ", ";
		}else{
			cout << " ";
		}
	}
	cout << endl << endl;
	
	cout << "Enter index you want to delete: ";
	cin >> index;
	
	bool match = false;
	for(int i = 0; i < length; i++){
		if(arr[i] == arr[index]){
			for(int j = i; j < length - 1; j++){
				arr[j] = arr[j + 1];
			}
			length--;
			match = true;
		}
	}
	if(!match){
		cout << index << " not found.";
	}
	
	cout << endl << endl;
	cout << "New array list: ";
	
	for(int i = 0; i < length; i++){
		cout << arr[i];
		if(i < length - 1){
			cout << ", ";
		}else{
			cout << " ";
		}
	}
	cout << endl << endl;
	system("PAUSE");
	system("cls");
}

void retrieve(){
	
	cout << "[ RETRIEVE ] \n\n";
	
	int index, length = 0, arrSize;
	
	arrSize = sizeof(arr) / sizeof(arr[0]);
	
	while(!arr[length].empty() && length < arrSize){
		length++;
	}
	
	cout << "Existing array list: ";
	
	for(int i = 0; i < length; i++){
		cout << arr[i];
		if(i < length - 1){
			cout << ", ";
		}else{
			cout << " ";
		}
	}
	cout << endl << endl;
	
	cout << "Enter index you wan to retrieve: ";
	cin >> index;
	
	for(int i = 0; i < length; i++){
		if(index == i){
			cout << "Retieve name: " << arr[i] << endl;
			break;
		}
		else if(index > length){
			cout << "Index is out of bounds! " << endl;
			break;
		}else{
			continue;
		}
	}
	
	system("PAUSE");
	system("cls");
}
