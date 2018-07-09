package portfolioPackage;
import java.util.Scanner;

public class accountMain
{

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Please enter you're account name so that we could access you're bank account");
		String account_name = sc.next();
		System.out.println("Hello: " + account_name + " Please enter you're username and password to see you're balance");
		String username = sc.next();
		String user_password = sc.next();
		
		bankAccount myBankAccount = new bankAccount(account_name, username, user_password, 100);
		
		while(true)
		{
			System.out.println("What action would you like to take?");
			System.out.println("1: Deposit");
			System.out.println("2: Withdraw");
			System.out.println("3: Balance Inquiry");
			System.out.println("4: Logoff");
			String action = sc.next();
			int actionInt = Integer.parseInt(action);
			
			if(actionInt == 1)
			{
				System.out.println("How much would you like to deposit?");
				String money = sc.next();
				double money_deposit = Double.parseDouble(money);
				myBankAccount.depositMoney(money_deposit);
			}
			else if(actionInt == 2)
			{
				System.out.println("How much would you like to withdraw?");
				String money = sc.next();
				double money_deposit = Double.parseDouble(money);
				myBankAccount.withdrawMoney(money_deposit);
			}
			else if(actionInt == 3)
			{
				System.out.println(myBankAccount.balance);
			}
			else if(actionInt == 4) break;
		}
	}
}
