import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.println("Digite as tres distancias:");
        double d1 = entrada.nextDouble();
        double d2 = entrada.nextDouble();
        double d3 = entrada.nextDouble();

        double maior = d1;

        if (d2 > maior) {
            maior = d2;
        }
        if (d3 > maior) {
            maior = d3;
        }

        System.out.printf("MAIOR DISTANCIA = %.2f%n", maior);

        entrada.close();
    }
}
