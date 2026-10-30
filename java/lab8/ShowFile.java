
import java.io.FileInputStream;
import java.io.IOException;

public class ShowFile {
    public static void main(String[] args) {
        String fileName = (args.length > 0)
                ? args[0]
                : "/Users/ypragnesh/Desktop/academics/java/lab8/notes.txt";

        try (FileInputStream fis = new FileInputStream(fileName)) {
            int data;

            while ((data = fis.read()) != -1) {
                System.out.print((char) data);
            }

        } catch (IOException e) {
            System.out.println("Cannot read '" + fileName + "'");
        }
    }
}
