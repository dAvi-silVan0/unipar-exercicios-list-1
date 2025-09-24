//esse projeto foi usado 1000% de copilot :)
//eu deveria aprender mais sobre java
//mas eu to com preguiça
//já to cheio dos cursos obrigatorio de c e c++
//socorro;-;
import java.util.Scanner;

public class NomeCompleto {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite seu primeiro nome: ");
        String primeiroNome = scanner.next();

        System.out.print("Digite seu sobrenome: ");
        String sobrenome = scanner.next();

        // Concatena os dois valores e exibe em uma única linha
        String nomeCompleto = primeiroNome + " " + sobrenome;
        System.out.println("Seu nome completo é: " + nomeCompleto);

        scanner.close();
    }
}