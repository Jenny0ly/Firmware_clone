/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file vehicle_imu.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/vehicle_imu.h>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_vehicle_imu_fields[] = "uint64_t timestamp;uint64_t timestamp_sample;uint32_t accel_device_id;uint32_t gyro_device_id;float[3] delta_angle;float[3] delta_velocity;uint16_t dt;uint8_t integrated_samples;uint8_t clip_count;uint8_t[4] _padding0;";

ORB_DEFINE(vehicle_imu, struct vehicle_imu_s, 52, __orb_vehicle_imu_fields);


void print_message(const vehicle_imu_s& message)
{

	PX4_INFO_RAW(" vehicle_imu_s\n");
	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, hrt_elapsed_time(&message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\ttimestamp_sample: %" PRIu64 "\n", message.timestamp_sample);
	PX4_INFO_RAW("\taccel_device_id: %" PRIu32 "\n", message.accel_device_id);
	PX4_INFO_RAW("\tgyro_device_id: %" PRIu32 "\n", message.gyro_device_id);
	PX4_INFO_RAW("\tdelta_angle: [%.4f, %.4f, %.4f]\n", (double)message.delta_angle[0], (double)message.delta_angle[1], (double)message.delta_angle[2]);
	PX4_INFO_RAW("\tdelta_velocity: [%.4f, %.4f, %.4f]\n", (double)message.delta_velocity[0], (double)message.delta_velocity[1], (double)message.delta_velocity[2]);
	PX4_INFO_RAW("\tdt: %u\n", message.dt);
	PX4_INFO_RAW("\tintegrated_samples: %u\n", message.integrated_samples);
	PX4_INFO_RAW("\tclip_count: %u\n", message.clip_count);
	
}
