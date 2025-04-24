```
public class Greeter {
    public void greet() {
        String[] greetings = {"Hello", "Hola", "Bonjour", "Привет", "こんにちは"};
        for(String greeting : greetings) {
            System.out.println(greeting);
        }
    }

    public static void main(String[] args) {
        Greeter greeter = new Greeter();
        greeter.greet();
    }
}
```