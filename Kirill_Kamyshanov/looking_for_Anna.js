#Проверка, что среди подсказок есть Анна
pm.test("В ответе есть Анна", function () {
    pm.expect(pm.response.text()).to.include("Анна");
});
