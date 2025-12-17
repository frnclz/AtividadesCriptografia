package ifma.edu.criptografa;

public class Main {
    static String criptografar(String mensagem, String chave){
        String resultado = "";
        int cl = chave.length();

        for(int i = 0; i < mensagem.length(); i++){
            char charMensagem = mensagem.charAt(i);
            char charChave = chave.charAt(i % cl);

            if(Character.isLetter(charMensagem)){
                char base = Character.isUpperCase(charMensagem) ? 'A' : 'a';
                char charResultado = (char) (((charMensagem - base) + (Character.toUpperCase(charChave) - 'A')) % 26 + base);
                resultado += charResultado;
            } else {
                resultado += charMensagem;
            }
        } return resultado;
    }
    public static void main(String[] args) {
        String mensagem, chave;
        System.out.println("Digite uma mensagem: ");
        mensagem = System.console().readLine();
        System.out.println("Digite uma chave: ");
        chave = System.console().readLine();

        System.out.println("Mensagem criptografada: ");
        System.out.println(criptografar(mensagem, chave));
    }
}