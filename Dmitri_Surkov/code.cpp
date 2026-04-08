using System;

public class Greeter {
    public void Greet() {
        string[] greetings = {"Hello", "Hola", "Bonjour", "Привет", "?????"};
        foreach(var greeting in greetings) {
            Console.WriteLine(greeting);
        }
    }

    static void Main(string[] args) {
        Greeter greeter = new Greeter();
        greeter.Greet();
    }
}