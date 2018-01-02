/* 02.01.2018
   https://github.com/SFERA-GIT/Nano-shield-rev.-1.1
   СФЕРА ЗНАНИЙ (г.Челябинск) http://сферазнаний.рф/
   Пример работы с пьезоизлучателем (контакт D9) и переключателем на контакте D10.
   Для работы с пьезоизлучателем необходимо установить перемычку
   на нижней гребенке между зеленым и желтыми контактами напротив контакта D9.
   Для работы с переключателем необходимо его припаять,
   если он не установлен.
   D9 - BUZ_PIN (пьезоизлучатель)
   D10 - FUNC_PIN (переключатель)

   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!ВНИМАНИЕ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   Использование функции tone() будет мешать выходу PWM на контакты 3 и 11.
   т.е. одновременное использование пьезоизлучателя и моторов приведет неравномерной работе ШИМ на контактах 3 и 11
   (скорости, если подключен мотор; яркости, если подключен мощный светодиод).
*/

//Объявляем константы с помощью оператора #define
#define BUZ_PIN 9    // любое упоминание сочетания символов BUZ_PIN будет заменено компилятором на значение 9

//Обязательная функция setup (выполняется один раз перед функцией loop)
void setup()
//Тело функции setup
{
  pinMode(BUZ_PIN, OUTPUT);     //настройка контакта BUZ_PIN(9) на выход
}

//Обязательная функция loop (бесконечно повторяющаяся функция)
void loop()
//Тело функции loop
{
tone(9, 392, 350);
delay(350);
tone(9, 392, 350);
delay(350);
tone(9, 392, 350);
delay(350);
tone(9, 311, 250);
delay(250);
tone(9, 466, 100);
delay(100);
tone(9, 392, 350);
delay(350);
tone(9, 311, 250);
delay(250);
tone(9, 466, 100);
delay(100);
tone(9, 392, 700);
delay(700);

tone(9, 587, 350);
delay(350);
tone(9, 587, 350);
delay(350);
tone(9, 587, 350);
delay(350);
tone(9, 622, 250);
delay(250);
tone(9, 466, 100);
delay(100);
tone(9, 369, 350);
delay(350);
tone(9, 311, 250);
delay(250);
tone(9, 466, 100);
delay(100);
tone(9, 392, 700);
delay(700);

tone(9, 784, 350);
delay(350);
tone(9, 392, 250);
delay(250);
tone(9, 392, 100);
delay(100);
tone(9, 784, 350);
delay(350);
tone(9, 739, 250);
delay(250);
tone(9, 698, 100);
delay(100);
tone(9, 659, 100);
delay(100);
tone(9, 622, 100);
delay(100);
tone(9, 659, 450);
delay(450);

tone(9, 419, 150);
delay(150);
tone(9, 554, 350);
delay(350);
tone(9, 523, 250);
delay(250);
tone(9, 493, 100);
delay(100);
tone(9, 466, 100);
delay(100);
tone(9, 440, 100);
delay(100);
tone(9, 466, 450);
delay(450);

tone(9, 311, 150);
delay(150);
tone(9, 369, 350);
delay(350);
tone(9, 311, 250);
delay(250);
tone(9, 466, 100);
delay(100);
tone(9, 392, 750);
delay(750);
delay(5000);

} 
