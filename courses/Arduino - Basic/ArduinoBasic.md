Знакомство с Arduino Uno
================================

##Основные элементы Arduino Uno

Arduino Uno - представляет собой электронную плату с микроконтроллером, по сути - этакий миниатюрный компьютер. Как и любой компьютер, Arduino Uno работает по программе, составленной человеком.

Вот так выглядит плата Arduino Uno:

<img src="http://robotclass.ru/wp-content/uploads/2015/05/Arduino_Uno_subs.png" alt="Схема Arduino Uno" style="width: 400px;"/>

На плате размещается несколько важных компонентов, которые в дальнейшем будут помогать нам в работе: 
* Микроконтроллер Atmega328;
* Кнопка сброса - осуществляет сброс микроконтроллера и повторый запуск программы;
* Порт USB - обеспечивает связь с ПК и питание устройства;
* Светодиод №13 - светодиод, соединенный с цифровым выходом №13;
* Питание +9В - дополнительное питание от внешнего источника (батарея, блок питания);

##Схема выводов Arduino Uno

<img src="http://robotclass.ru/wp-content/uploads/2015/06/ARDUINO_V2_sub2.png" alt="Выводы Arduino Uno" style="width: 400px;"/>

<table>
<tr>
<td><img src="http://robotclass.ru/wp-content/uploads/2015/06/gnd_q.png" alt="Земля, Ground" style="width: 32px;"/></td>
<td>Отрицательный вывод питания (земля, ground)</td>
</tr>
<tr>
<td><img src="http://robotclass.ru/wp-content/uploads/2015/06/power_q.png" alt="Питание, Power" style="width: 32px;"/></td>
<td>Положительный вывод питания (+3.3В и +5В)</td>
</tr>
<tr>
<td><img src="http://robotclass.ru/wp-content/uploads/2015/06/ctrl_q.png" alt="Сброс, Reset" style="width: 32px;"/></td>
<td>Управляющие выводы (сброс)</td>
</tr>
<tr>
<td><img src="http://robotclass.ru/wp-content/uploads/2015/06/dig_q.png" alt="Цифровые выводы, GPIO" style="width: 32px;"/></td>
<td>Цифровые выводы (включен/выключен)</td>
</tr>
<tr>
<td><img src="http://robotclass.ru/wp-content/uploads/2015/06/analog_q.png" alt="Земля, Ground" style="width: 32px;"/></td>
<td>Аналоговые входы (снятие показаний с датчиков)</td>
</tr>
<tr>
<td><img src="http://robotclass.ru/wp-content/uploads/2015/06/pwm_q.png" alt="ШИМ выводы, PWM" style="width: 32px;"/></td>
<td>ШИМ выходы (плавное управление двигателями)</td>
</tr>
<tr>
<td><img src="http://robotclass.ru/wp-content/uploads/2015/06/serial_q.png" alt="Цифровые интерфейсы, Digital interfaces" style="width: 32px;"/></td>
<td>Интерфейсы (UART, I2C, SPI) (соединение с другими микроэлектронными устройствами)</td>
</tr>
<tr>
<td><img src="http://robotclass.ru/wp-content/uploads/2015/06/IDE_q.png" alt="Нумерация в Arduino IDE" style="width: 32px;"/></td>
<td>Нумерация в редакторе Arduino IDE</td>
</tr>
</table>

##Редактор программ Arduino IDE

Редактор Arduino IDE - это приложение на персональном компьютере, которая поможем нам составлять программы для Arduino Uno. Главное окно редактора:

<img src="http://robotclass.ru/wp-content/uploads/2015/05/arduino_ide_big_sub.png" alt="Редактор Arduino IDE" style="width: 400px;"/>

В самом верху окна располагается меню - 1. Чуть ниже - панель иконок - 2, которые дублируют самые частоиспользуемые функции меню. Далее идет панель вкладок - 3. Больше всего места занимает окно текстового редактора - 4, в котором и записывается программа. В самом низу размещается поле уведомлений - 5, в котором редактор сообщает об ошибках в программе.

