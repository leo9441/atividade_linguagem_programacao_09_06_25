import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Preco unitario do produto: ");
        double preco = entrada.nextDouble();

        System.out.print("Quantidade comprada: ");
        int quantidade = entrada.nextInt();

        System.out.print("Dinheiro recebido: ");
        double dinheiro = entrada.nextDouble();

        double total = preco * quantidade;
        double troco = dinheiro - total;

        if (troco >= 0) {
            System.out.printf("TROCO = %.2f%n", troco);
        } else {
            System.out.printf("DINHEIRO INSUFICIENTE. FALTAM %.2f REAIS%n", -troco);
        }

        entrada.close();
    }
}
