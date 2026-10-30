
import java.awt.*;
import java.awt.event.*;

public class SwapNumbers extends Frame implements ActionListener {
    TextField num1, num2;
    Button swap;

    SwapNumbers() {
        setTitle("Swap Two Numbers");
        setSize(350, 180);
        setLayout(new FlowLayout());

        add(new Label("First Number:"));
        num1 = new TextField(15);
        add(num1);

        add(new Label("Second Number:"));
        num2 = new TextField(15);
        add(num2);

        swap = new Button("Swap");
        add(swap);

        swap.addActionListener(this);

        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                dispose();
            }
        });

        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        String temp = num1.getText();
        num1.setText(num2.getText());
        num2.setText(temp);
    }

    public static void main(String[] args) {
        new SwapNumbers();
    }
}
