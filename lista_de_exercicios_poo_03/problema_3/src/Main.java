import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Primeiro valor: ");
        int num1 = entrada.nextInt();

        System.out.print("Segundo valor: ");
        int num2 = entrada.nextInt();

        System.out.print("Terceiro valor: ");
        int num3 = entrada.nextInt();

        int menor = num1;

        if (num2 < menor) {
            menor = num2;
        }
        if (num3 < menor) {
            menor = num3;
        }

        System.out.println("MENOR = " + menor);

        entrada.close();
    }
}
