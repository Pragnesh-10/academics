
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.charset.StandardCharsets;

public class WriteFile {
    public static void main(String[] args) {
        String fileName = "output.txt";

        try {
            // Step 1: Write two lines.
            // This overwrites existing content.
            try (FileOutputStream fos =
                         new FileOutputStream(fileName)) {

                String text =
                        "Hello, Java!\n"
                        + "This is the second line.\n";

                fos.write(text.getBytes(StandardCharsets.UTF_8));
            }

            // Step 2: Append one more line.
            try (FileOutputStream fos =
                         new FileOutputStream(fileName, true)) {

                String text = "This line is appended.\n";
                fos.write(text.getBytes(StandardCharsets.UTF_8));
            }

            // Step 3: Read the file and print its contents.
            try (FileInputStream fis =
                         new FileInputStream(fileName)) {

                int data;

                while ((data = fis.read()) != -1) {
                    System.out.print((char) data);
                }
            }

        } catch (IOException e) {
            System.out.println("File operation failed: "
                    + e.getMessage());
        }
    }
}
