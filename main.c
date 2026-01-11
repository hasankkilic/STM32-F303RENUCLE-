 //  while(1) döngüsünün içi: bbu sekilde olucak 

/* USER CODE BEGIN 3 */

  // 1. LED'in Durumunu Tersle (Toggle)
  // PA5 pini, Nucleo kartinda Yesil LED'e baglidir.
  // Bu komut; LED yaniyorsa sondurur, sonuyorsa yakar.
  HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);

  
  // 500 milisaniye  boyunca islemciyi durdur.
  // Eger bunu yazmazsak LED o kadar hizli yanip soner ki gozumuz goremez.
  HAL_Delay(500);

  /* USER CODE END 3 */
