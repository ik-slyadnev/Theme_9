


# Python

```
class Greeter:
    def __init__(self):
        self.greetings = {
            "English": "Hello",
            "Spanish": "Hola",
            "French": "Bonjour",
            "Russian": "Привет",
            "Japanese": "こんにちは"
        }
    
    def greet(self):
        for language, greeting in self.greetings.items():
            print(f"{greeting} ({language})")

# Создание экземпляра класса и вызов метода
greeter = Greeter()
greeter.greet()
```

# Java
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

# C#
```
using System;

public class Greeter {
    public void Greet() {
        string[] greetings = {"Hello", "Hola", "Bonjour", "Привет", "こんにちは"};
        foreach(var greeting in greetings) {
            Console.WriteLine(greeting);
        }
    }

    static void Main(string[] args) {
        Greeter greeter = new Greeter();
        greeter.Greet();
    }
}
```
# JS
```
class Greeter {
    greet() {
        const greetings = ["Hello", "Hola", "Bonjour", "Привет", "こんにちは"];
        greetings.forEach(greeting => console.log(greeting));
    }
}

// Использование класса
const greeter = new Greeter();
greeter.greet();
```
