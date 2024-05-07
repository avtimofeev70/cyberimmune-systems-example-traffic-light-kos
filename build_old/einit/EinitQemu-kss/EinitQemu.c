/* The following code has been generated by `einit` program */

#include <stdlib.h>
#include <stdio.h>

#include <rtl/retcode.h>
#include <coresrv/entity/entity_api.h>
#include <services/handle/if_connection.h>



static const EntityInfo taskInfo_traffic_light_ControlSystem_0 = {
    .eiid = "traffic_light.ControlSystem",
    .max_endpoints = 0,
    .endpoints = NK_NULL,
};
static const EntityInfo taskInfo_traffic_light_Diagnostics_1 = {
    .eiid = "traffic_light.Diagnostics",
    .max_endpoints = 0,
    .endpoints = NK_NULL,
};
static const EndpointInfo endpointsInfo_traffic_light_LightsGPIO_2[2] = {
    {
        .name = "traffic_light.CMode.mode",
        .riid = 0,
        .iface_name = "traffic_light.IMode",
    },
    {
        .name = "lightsGpio.mode",
        .riid = 0,
        .iface_name = "traffic_light.IMode",
    }
};
static const EntityInfo taskInfo_traffic_light_LightsGPIO_2 = {
    .eiid = "traffic_light.LightsGPIO",
    .max_endpoints = 2,
    .endpoints = endpointsInfo_traffic_light_LightsGPIO_2,
};

/* init entity entry point */
int main(void) {

    Entity * task_traffic_light_ControlSystem_0;
    Entity * task_traffic_light_Diagnostics_1;
    Entity * task_traffic_light_LightsGPIO_2;

    const char * taskInfo_traffic_light_ControlSystem_0_args[] = {
        "ControlSystem",
        RTL_NULL
    };
    const char * taskInfo_traffic_light_Diagnostics_1_args[] = {
        "Diagnostics",
        RTL_NULL
    };
    const char * taskInfo_traffic_light_LightsGPIO_2_args[] = {
        "LightsGPIO",
        RTL_NULL
    };

    /* initialize entities */

    task_traffic_light_Diagnostics_1 = EntityInitEx(
        &taskInfo_traffic_light_Diagnostics_1, "traffic_light.Diagnostics", "Diagnostics"
    );
    if (!task_traffic_light_Diagnostics_1) {
        fprintf(
            stderr, "Can't initialize task \"traffic_light.Diagnostics\"\n"
        );
        return EXIT_FAILURE;
    }

    if (EntitySetArgs(task_traffic_light_Diagnostics_1, taskInfo_traffic_light_Diagnostics_1_args) != rcOk) {
        fprintf(
            stderr, "Can't set args for task \"traffic_light.Diagnostics\"\n"
        );
        return EXIT_FAILURE;
    }
    task_traffic_light_LightsGPIO_2 = EntityInitEx(
        &taskInfo_traffic_light_LightsGPIO_2, "traffic_light.LightsGPIO", "LightsGPIO"
    );
    if (!task_traffic_light_LightsGPIO_2) {
        fprintf(
            stderr, "Can't initialize task \"traffic_light.LightsGPIO\"\n"
        );
        return EXIT_FAILURE;
    }

    if (EntitySetArgs(task_traffic_light_LightsGPIO_2, taskInfo_traffic_light_LightsGPIO_2_args) != rcOk) {
        fprintf(
            stderr, "Can't set args for task \"traffic_light.LightsGPIO\"\n"
        );
        return EXIT_FAILURE;
    }
    task_traffic_light_ControlSystem_0 = EntityInitEx(
        &taskInfo_traffic_light_ControlSystem_0, "traffic_light.ControlSystem", "ControlSystem"
    );
    if (!task_traffic_light_ControlSystem_0) {
        fprintf(
            stderr, "Can't initialize task \"traffic_light.ControlSystem\"\n"
        );
        return EXIT_FAILURE;
    }

    if (EntitySetArgs(task_traffic_light_ControlSystem_0, taskInfo_traffic_light_ControlSystem_0_args) != rcOk) {
        fprintf(
            stderr, "Can't set args for task \"traffic_light.ControlSystem\"\n"
        );
        return EXIT_FAILURE;
    }

    /* setup connections between entities */

    if (EntityConnectToService(task_traffic_light_LightsGPIO_2, task_traffic_light_Diagnostics_1, "diagnostics_connection") != rcOk) {
        fprintf(stderr, "Can't setup a connection %s\n", "diagnostics_connection");
        return EXIT_FAILURE;
    }
    if (EntityConnectToService(task_traffic_light_ControlSystem_0, task_traffic_light_LightsGPIO_2, "lights_gpio_connection") != rcOk) {
        fprintf(stderr, "Can't setup a connection %s\n", "lights_gpio_connection");
        return EXIT_FAILURE;
    }



    /* run entities */

    if (EntityRun(task_traffic_light_Diagnostics_1) != rcOk) {
        fprintf(
            stderr, "Can't run task \"traffic_light.Diagnostics\"\n"
        );
        return EXIT_FAILURE;
    }
    if (EntityRun(task_traffic_light_LightsGPIO_2) != rcOk) {
        fprintf(
            stderr, "Can't run task \"traffic_light.LightsGPIO\"\n"
        );
        return EXIT_FAILURE;
    }
    if (EntityRun(task_traffic_light_ControlSystem_0) != rcOk) {
        fprintf(
            stderr, "Can't run task \"traffic_light.ControlSystem\"\n"
        );
        return EXIT_FAILURE;
    }


    return EXIT_SUCCESS;
}
