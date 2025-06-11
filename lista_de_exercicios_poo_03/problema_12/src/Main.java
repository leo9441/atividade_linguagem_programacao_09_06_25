import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Hora inicial: ");
        int horaInicio = entrada.nextInt();

        System.out.print("Hora final: ");
        int horaFim = entrada.nextInt();

        int duracao;

        if (horaFim > horaInicio) {
            duracao = horaFim - horaInicio;
        } else if (horaFim == horaInicio) {
            duracao = 24;
        } else {
            duracao = 24 - (horaInicio - horaFim);
        }

        System.out.println("O JOGO DUROU " + duracao + " HORA(S)");

        entrada.close();
    }
}
