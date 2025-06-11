import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Digite a quantidade de minutos: ");
        int minutos = entrada.nextInt();

        double valorBase = 50.0;
        int franquia = 100;
        double valorFinal;

        if (minutos <= franquia) {
            valorFinal = valorBase;
        } else {
            int excedente = minutos - franquia;
            valorFinal = valorBase + excedente * 2.0;
        }

        System.out.printf("Valor a pagar: R$ %.2f%n", valorFinal);

        entrada.close();
    }
}
