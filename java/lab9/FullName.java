import java.awt.*;
import java.awt.event.*;

public class FullName extends Frame implements ActionListener {
    TextField firstName, lastName;
    Label result;
    Button submit;

    FullName() {
        setTitle("Full Name");
        setSize(350, 500);
        setLayout(new FlowLayout());

        add(new Label("First Name:"));
        firstName = new TextField(20);
        add(firstName);

        add(new Label("Last Name:"));
        lastName = new TextField(20);
        add(lastName);

        submit = new Button("Display Full Name");
        add(submit);

        result = new Label("Full Name: ");
        add(result);

        submit.addActionListener(this);

        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                dispose();
            }
        });

        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        String fullName = firstName.getText() + " "
                        + lastName.getText();
        result.setText("Full Name: " + fullName);
    }

    public static void main(String[] args) {
        new FullName();
    }
}
