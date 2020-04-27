//IncorrectPassword

void incorrectPASSWORD() // When enter wrong pincode
{
delay(1000);
lcd.clear();
lcd.setCursor(1,0);
lcd.print("PinCode"); // Print pincode
lcd.setCursor(6,0);
lcd.print("incorrectPASSWORD"); // Printing incorrect pincode
lcd.setCursor(13,1);
lcd.println(" ");
lcd.setCursor(2,1);
lcd.println("Please enter correct password!!!");

lcd.setCursor(10,1);
lcd.println(" ");
Serial.println("PinCode is incorrect. Access denied");
digitalWrite(Greenled, HIGH); // Greenlight High with buzzer high 
digitalWrite(buzzer, HIGH);
delay(3000);
lcd.clear();
digitalWrite(Greenled, LOW);
digitalWrite(buzzer,LOW);
displayLCDscreen(); // Display in LCD
}
