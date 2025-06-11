import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Coeficiente a: ");
        double a = entrada.nextDouble();

        System.out.print("Coeficiente b: ");
        double b = entrada.nextDouble();

        System.out.print("Coeficiente c: ");
        double c = entrada.nextDouble();

        double delta = b * b - 4 * a * c;

        if (delta < 0) {
            System.out.println("Esta equacao nao possui raizes reais");
        } else {
            double raizDelta = Math.sqrt(delta);
            double x1 = (-b + raizDelta) / (2 * a);
            double x2 = (-b - raizDelta) / (2 * a);

            System.out.printf("X1 = %.4f%n", x1);
            System.out.printf("X2 = %.4f%n", x2);
        }

        entrada.close();
    }
}
