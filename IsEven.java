import java.util.Scanner;

public class IsEven
{

	public static void main(String[] args)
	{	boolean keepGoing = true;
		while (keepGoing)
		{
			Scanner in = new Scanner(System.in);
			System.out.println("Enter a number to determine whether it's even or odd:");
			int userNum = in.nextInt();
			if(userNum == 0)
				System.out.println("Uhoh, try again.");
			if(userNum % 2 == 0)
				System.out.println("It's even!");
			else
				System.out.println("It's odd!");

			System.out.println("Would you like to try again? Enter 1 for yes, 0 for no");
			userNum = in.nextInt();
			if(userNum == 0)
				keepGoing = false;
			else
				continue;
		} // While end
	} // Main end
} // Class end
