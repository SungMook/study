/*
* 문제 번호 : 2941
* 문제 이름 : 크로아티아 알파벳
*/
package practice;

import java.util.Scanner;

public class p2941 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();

		input = input.replaceAll("c=", "0");
		input = input.replaceAll("c-", "1");
		input = input.replaceAll("dz=", "2");
		input = input.replaceAll("d-", "3");
		input = input.replaceAll("lj", "4");
		input = input.replaceAll("nj", "5");
		input = input.replaceAll("s=", "6");
		input = input.replaceAll("z=", "7");
		
		System.out.println(input.length());
		sc.close();
	}
}