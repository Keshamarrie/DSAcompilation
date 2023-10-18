import java.util.*;

public class Haha {
    private static Scanner input = new Scanner(System.in);
    private static LinkedList <String> list = new LinkedList<>();

    public static void Add(){
        while(true){
            println("\tADD \n\n");
            print("Enter item to add: ");
            String add = input.nextLine();

            boolean match = true;
            for(String item : list){
                if(item.equalsIgnoreCase(add)){
                    println("Item already exist.");
                    match = false;
                }
            }
            if(match){
                list.add(add);
                println("Item added successfully.");
                break;
            }
        }
    }
    public static void Delete(){
        if(!list.isEmpty()){
            println("\tDELETE \n\n");

            println("___________________");
            for(String items : list){
                println(items);
                println("___________________");
            }
            while(true){
                print("Enter item to delete: ");
                String del = input.nextLine();

                boolean match = true;
                for(String item : list){
                    if(item.equalsIgnoreCase(del)){
                        list.remove(del);
                        println("Item deleted successfully.");
                        match = false;
                    }
                }
                if(match){
                    println("Item not found.");
                }else{
                    break;
                }
            }
        }else{
            println("No item in the list.");
        }
    }
    public static void Update(){
        if(!list.isEmpty()){
            println("\tUPDATE \n\n");

            println("___________________");
            for(String items : list){
                println(items);
                println("___________________");
            }
            while(true){
                print("Enter item to update: ");
                String update = input.nextLine();
                print("Enter item to replace: ");
                String replace = input.nextLine();

                int index = list.indexOf(update);

                boolean match = true;
                for(String item : list){
                    if(item.equalsIgnoreCase(update)){
                        list.set(index, replace);
                        println("Item updated successfully.");
                        match = false;
                    }
                }
                if(match){
                    println("Item not found.");
                }else{
                    break;
                }
            }
        }else{
            println("No item in the list.");
        }
    }
    public static void Display(){
        if(!list.isEmpty()){
            println("\tDISPLAY \n\n");

            println("___________________");
            for(String items : list){
                println(items);
                println("___________________");
            }
        }else{
            println("No item in the list.");
        }
    }

    public static void main(String[] args){
        while(true){
            println("[1] Add");
            println("[2] Delete");
            println("[3] Update");
            println("[4] Display");
            println("[5] Exit");
            print("Please enter: ");
            String enter = input.nextLine();

            switch(ErrorHandler(enter)){
                case 1:{
                    Add();
                    break;
                }
                case 2:{
                    Delete();
                    break;
                }
                case 3:{
                    Update();
                    break;
                }
                case 4:{
                    Display();
                    break;
                }
                case 5:{
                    println("Program finished...");
                    System.exit(0);
                    break;
                }default:
            }
        }
    }

    public static int ErrorHandler(String var){
        int val = 0;

        try{
            val = Integer.parseInt(var);
        }catch(NumberFormatException intException){
            println("Invalid input.");
        }
        return val;
    }

    public static void print(String var){
        System.out.print(var);
    }
    public static void print(int var){
        System.out.print(var);
    }
    public static void println(String var){
        System.out.println(var);
    }
    public static void println(int var){
        System.out.println(var);
    }
}
