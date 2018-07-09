package portfolioPackage;

public class bankAccount
{
	public String accountName;
	private String user_name;
	private String password;
	public double balance;

	public bankAccount( String accountName, String user_name, String password, double balance)
	{
		this.accountName = accountName;
		this.user_name = user_name;
		this.password = password;
		this.balance = balance;
	}

	public void depositMoney(double addMoney)
	{
		if (addMoney < 0)
		{
			System.out.println("You can't deposit negative amount of money");
		}
		else
		{
			this.balance = this.balance + addMoney;
			System.out.println("You have deposited " + "$" + addMoney + " " + "into you're account, the balance is now: " + "$" + this.balance);
		}
	}
	
	public void withdrawMoney(double withdraw)
	{
		if(withdraw < 0)
		{
			System.out.println("You can't withdraw a negative amount of money");
		}
		else if(withdraw < this.balance)
		{
			System.out.println("You can't withdraw " + "$" + withdraw + " amount of money");
		}
		else
		{
			this.balance = this.balance - withdraw;
			System.out.println("You have withdraw " + "$" + withdraw + " from you're account, the current balance is: " + "$" + this.balance);
		}
	}
}
