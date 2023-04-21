#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/uart.h"
#include "esp_log.h"
#include "driver/gpio.h"

#include "uart_events.h"
#include "sample.h"

#include "UART_BlinkLED.h"

static const char *TAG = "UART_BlinkLED";

void app_main(void)
{
    vTaskDelay(500 / portTICK_PERIOD_MS);
    func_uart_events();
    func_sample();

}
