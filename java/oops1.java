class Box {
    double length;
    double breadth;
    double height;

}
class Demo{
    public static void main(String args[]){
        Box b1 = new Box();
        b1.length = 10;
        b1.breadth = 20;
        b1.height = 30;
        double vol = b1.length * b1.breadth * b1.height;
        System.out.println("Volume of box is: " + vol);

    }
}