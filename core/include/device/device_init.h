/**
 * @author Cristóvão Zuppardo Rufino <cristovaozr@gmail.com>
 * @version 0.1
 *
 * @copyright Copyright Cristóvão Zuppardo Rufino (c) 2020
 * Please see LICENCE file to information regarding licensing
 */

#ifndef CORE_INCLUDE_DEVICE_DEVICE_INIT_H_
#define CORE_INCLUDE_DEVICE_DEVICE_INIT_H_

#include <stdint.h>

/**
 * @brief API to configure devices from exported.h
 */

/**
 * @brief Function to call each device init in the device_operations structure
 *
 * @param device Pointer to any structure declared in "exported.h"
 * @return 0 if configuration is successful; a negative number on error
 */
extern int32_t device_init(const void * const device);

#endif // CORE_INCLUDE_DEVICE_DEVICE_INIT_H_
