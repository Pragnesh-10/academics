class Employee {
    int id;
    String name;
    double salary;

    void displayEmployee() {
        System.out.println("Employee ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
    }
}

class Manager extends Employee {
    String department;

    void displayManager() {
        System.out.println("Department: " + department);
    }
}

public class SimpleInheritance2 {
    public static void main(String[] args) {
        Manager m = new Manager();

        m.id = 101;
        m.name = "Arun";
        m.salary = 50000;
        m.department = "IT";

        m.displayEmployee();
        m.displayManager();
    }
}