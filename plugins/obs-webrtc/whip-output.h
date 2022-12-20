#include "obs-module.h"
#include "bindings.h"
#include <util/threading.h>

struct whip_output {
	obs_output_t *output;

	pthread_mutex_t write_mutex;
	int64_t audio_timestamp;
	int64_t video_timestamp;

	OBSWebRTCWHIPOutput *whip_output;
};