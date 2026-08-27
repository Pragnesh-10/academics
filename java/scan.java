import java.util.Scanner;

class Scan {
    public static void main(String args[]) {
        
        System.out.print("Enter id name sal: ");
        Scanner OBJ1 = new Scanner(System.in);
        
        int id = OBJ1.nextInt();
        String name = OBJ1.next();
        float sal = OBJ1.nextFloat();
        
        System.out.println("Id=" + id);
        System.out.println("Name=" + name);
        System.out.println("sal=" + sal);
        
        // Safely close the scanner object
        OBJ1.close();
    }
}