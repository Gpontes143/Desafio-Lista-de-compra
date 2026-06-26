package program;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner (System.in);
		 
		while(true) {
		
		char escolha;
		
		System.out.println("\n===== Mercado do Ph =====");
		System.out.println("\n------------------------");
		System.out.println("| 1 - Adicionar itens  |");;
		System.out.println("| 2 - Alterar Preço    |");
		System.out.println("| 3 - Remover item     |");
		System.out.println("| 4 - Sair             |");
		System.out.println("------------------------");
		   
		 System.out.print("\nDigite: ");
		 escolha = sc.next().charAt(0);
		 System.out.println("\n---------------------------");

		 
		 		 
		
		 	if(escolha == '1') {
		 		
		 		System.out.println("\n=== Adicionar item ===");
		 		int n = 20;
		 		
		 		while(true) {
		 	
		 			//ADICIONAR VETOR
		 		System.out.print("\nDigite a quantidade de itens (Possivel apenas até 20 itens): ");
		 		n = sc.nextInt();
		 			
		 		
		 		
		 			// if DO VETOR
		 			if (n > 20) {
		 				System.out.println("Só pode adicionar até 20 itens");
		 					continue; }
		 			else {
		 					break;}	
		 			}
		 	
		 		System.out.print("\nItem: ");
		 		String nome = sc.next();
		 		System.out.print("Preço: R$");
		 		double preco = sc.nextDouble();
		 		
		 		System.out.print("\nDados do Item: " + nome + ", Preço: R$" + preco);
		 		
		 		break;
		 		}
		 	
		 	
		
		 	
		 	
		 	else if(escolha == '4') {
		 		System.out.println("\n=== Volte sempre! ===");
		 		break;
		 	}
		 	
		 
	}
		sc.close();
	}

}