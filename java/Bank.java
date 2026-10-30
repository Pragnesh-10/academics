import java.util.ArrayList;

class Bank {
  
    String name;
    int account_no;
    double balance;

    static String bankName = "SBI";
    static double totalBalance = 0;
    static int noOfAccounts = 0;

    static ArrayList<Bank> accounts = new ArrayList<>();

    static void Deposit(int account_no, double amount) {
        for (Bank account : accounts) {
            if (account.account_no == account_no) {
                account.balance += amount;
                totalBalance += amount;

                System.out.println("Amount deposited successfully.");
                System.out.println("Deposited Amount: " + amount);
                System.out.println("Updated Balance: " + account.balance);
                return;
            }
        }

        System.out.println("Account not found.");
    }

    // Display account details
    void Display() {
        System.out.println("Account Number: " + account_no);
        System.out.println("Name: " + name);
        System.out.println("Balance: " + balance);
    }

    // Display bank details
    static void Bankdetails() {
        System.out.println("Bank Name: " + bankName);
        System.out.println("Total Balance: " + totalBalance);
        System.out.println("Number of Accounts: " + noOfAccounts);
    }
}

public class Main {
    public static void main(String[] args) {

      
        Bank b1 = new Bank("Pragnesh", 101, 10000);
        Bank b2 = new Bank("Rahul", 102, 20000);
        Bank b3 = new Bank("Arun", 103, 15000);
        System.out.println("Account 1");
        b1.Display();
        System.out.println("Account 2");
        b2.Display();
        System.out.println("Deposit");
        Bank.Deposit(101, 50000);

        System.out.println("Updated Account");
        b1.Display();
        System.out.println("Bank Details");
        Bank.Bankdetails();
    }
}