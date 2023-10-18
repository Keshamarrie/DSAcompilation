#include <iostream>
using namespace std;

int main(){
	string array[10][10];
	string info[] = {"Name" , "Age", "Address", "Gender"};
	int elements, index, select;
	bool match = false;
	
	int arr = sizeof(info) / sizeof(info[0]);
	
	do{
		cout << "Menu: \n";
		cout << "1. Insert \n";
		cout << "2. Display \n";
		cout << "3. Exit \n";
		cout << "Please enter: ";
		cin >> select;
		
		system("PAUSE");
		system("cls");
		
		switch(select){
			case 1:{
				while(true){
					cout << "How many elements you want to add? maximum of five: ";
					cin >> elements;
					
					if(elements > 5){
						cout << "Maximum number is 5, you must enter below than 5! " << endl;
						continue;
					}else{
						break;
					}
				}
				
				for(int i = 0; i < elements; i++){
					for(int j = 0; j < arr; j++){
						cout << info[j] << ": ";
						cin >> array[i][j];
					}
				}
				match = true;
				system("PAUSE");
				system("cls");
				break;
			}
			case 2:{
				if(match){
					while(true){
						cout << "Enter index you want to display [0, 1, 2, 3, 4]: ";
						cin >> index;
						
						if(index > elements){
							cout << "Out of the size of elements, you must enter lower than " << elements << "!" << endl;
							continue;
						}else{
							break;
						}
					}
					
					for(int j = 0; j < elements; j++){
						if(index == j){
							for(int i = 0; i < arr; i++){
								cout << info[i] << ": " << array[index][i] << endl;
							}
							break;
						}else{
							continue;
						}
					}
				}else{
					cout << "You haven't inserted any data yet! " << endl;
				}
				system("PAUSE");
				system("cls");
				break;
			}
			case 3:{
				cout << "Program finished..." << endl;
				break;
			}
			default:{
				cout << "Out of the chooices above, please try again! " << endl;
				system("PAUSE");
				system("cls");
				continue;
			}
		}
	}while(select != 3);
	
	return 0;
}
