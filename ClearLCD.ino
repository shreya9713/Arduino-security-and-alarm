//Clear LCD Screen 
void clearLCDscreen()
{
lcd.setCursor(0,0); // set cursor to (0,0)
lcd.println(" ");
lcd.setCursor(0,1);
lcd.println(" ");
lcd.setCursor(0,2);
lcd.println(" ");
lcd.setCursor(0,3);
lcd.println(" "); // Print clear screen 
}
