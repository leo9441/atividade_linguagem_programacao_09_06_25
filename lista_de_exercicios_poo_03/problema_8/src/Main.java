import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Voce vai digitar a temperatura em qual escala (C/F)? ");
        String escala = entrada.next();

        if (escala.equalsIgnoreCase("C")) {
            System.out.print("Digite a temperatura em Celsius: ");
            double c = entrada.nextDouble();
            double f = c * 9.0 / 5.0 + 32;
            System.out.printf("Temperatura equivalente em Fahrenheit: %.2f%n", f);
        } else if (escala.equalsIgnoreCase("F")) {
            System.out.print("Digite a temperatura em Fahrenheit: ");
            double f = entrada.nextDouble();
            double c = (5.0 / 9.0) * (f - 32);
            System.out.printf("Temperatura equivalente em Celsius: %.2f%n", c);
        } else {
            System.out.println("Escala invalida. Digite C ou F.");
        }

        entrada.close();
    }
}
