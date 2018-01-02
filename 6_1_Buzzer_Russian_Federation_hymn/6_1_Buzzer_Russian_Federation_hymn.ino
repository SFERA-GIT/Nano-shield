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
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 174, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 195, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 220, 499.9995);
delay(555.555);
tone(BUZ_PIN, 146, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 146, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 195, 499.9995);
delay(555.555);
tone(BUZ_PIN, 174, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 155, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 174, 499.9995);
delay(555.555);
tone(BUZ_PIN, 116, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 116, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 130, 499.9995);
delay(555.555);
tone(BUZ_PIN, 130, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 146, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 155, 499.9995);
delay(555.555);
tone(BUZ_PIN, 155, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 174, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 195, 499.9995);
delay(555.555);
tone(BUZ_PIN, 220, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 233, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 261, 749.99925);
delay(833.3325);
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 293, 499.9995);
delay(555.555);
tone(BUZ_PIN, 261, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 233, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 261, 499.9995);
delay(555.555);
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 220, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 195, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 220, 499.9995);
delay(555.555);
tone(BUZ_PIN, 146, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 146, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 195, 499.9995);
delay(555.555);
tone(BUZ_PIN, 174, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 155, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 174, 499.9995);
delay(555.555);
tone(BUZ_PIN, 116, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 116, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 220, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 195, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 174, 999.999);
delay(1111.11);
tone(BUZ_PIN, 293, 999.999);
delay(1111.11);
tone(BUZ_PIN, 261, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 220, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 261, 749.99925);
delay(833.3325);
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 174, 999.999);
delay(1111.11);
tone(BUZ_PIN, 233, 999.999);
delay(1111.11);
tone(BUZ_PIN, 220, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 195, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 174, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 195, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 220, 749.99925);
delay(833.3325);
tone(BUZ_PIN, 146, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 146, 999.999);
delay(1111.11);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 195, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 220, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 195, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 220, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 195, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 233, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 311, 999.999);
delay(1111.11);
tone(BUZ_PIN, 311, 999.999);
delay(1111.11);
tone(BUZ_PIN, 293, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 261, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 261, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 293, 749.99925);
delay(833.3325);
tone(BUZ_PIN, 233, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 999.999);
delay(1111.11);
tone(BUZ_PIN, 261, 999.999);
delay(1111.11);
tone(BUZ_PIN, 233, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 220, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 195, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 220, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 233, 749.99925);
delay(833.3325);
tone(BUZ_PIN, 195, 249.99975);
delay(277.7775);
tone(BUZ_PIN, 195, 999.999);
delay(1111.11);
tone(BUZ_PIN, 233, 499.9995);
delay(555.555);
tone(BUZ_PIN, 220, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 195, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 174, 499.9995);
delay(555.555);
tone(BUZ_PIN, 116, 374.999625);
delay(416.66625);
tone(BUZ_PIN, 116, 124.999875);
delay(138.88875);
tone(BUZ_PIN, 174, 999.999);
delay(1111.11);
tone(BUZ_PIN, 195, 499.9995);
delay(555.555);
tone(BUZ_PIN, 220, 499.9995);
delay(555.555);
tone(BUZ_PIN, 233, 1999.998);
delay(2222.22);

}
