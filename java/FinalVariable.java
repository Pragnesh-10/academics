class Parent {
    final int number = 100;
}

class Child extends Parent {
    void display() {
        System.out.println("Final variable value: " + number);
    }
}

public class FinalVariable {
    public static void main(String[] args) {
        Child c = new Child();
        c.display();
    }
}