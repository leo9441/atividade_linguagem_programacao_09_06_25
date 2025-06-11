import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Digite a medida da glicose: ");
        double glicose = entrada.nextDouble();

        if (glicose <= 100.0) {
            System.out.println("Classificacao: normal");
        } else if (glicose <= 140.0) {
            System.out.println("Classificacao: elevado");
        } else {
            System.out.println("Classificacao: diabetes");
        }

        entrada.close();
    }
}
