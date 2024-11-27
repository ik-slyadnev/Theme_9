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