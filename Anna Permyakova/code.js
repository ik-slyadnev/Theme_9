class Greeter {
    greet() {
        const greetings = ["Hello", "Hola", "Bonjour", "Привет", "こんにちは"];
        greetings.forEach(greeting => console.log(greeting));
    }
}

const greeter = new Greeter();
greeter.greet();
