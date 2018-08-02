#ifndef SOUND_PROVIDER_PCM_H
#define SOUND_PROVIDER_PCM_H
#include <sound.h>
#include <soundProviderTask.h>

class SoundProviderPcm: public Sound::SoundProviderTask {
	protected:
		unsigned long int getFrequency();
		void task_code();

		unsigned long int freq = 0;
		const Sound::SoundData *data = NULL;
		Sound::SoundPos len = 0;
	public:
		SoundProviderPcm(const Sound::SoundData *dataarg, Sound::SoundPos lenarg, unsigned long int freqarg);
		virtual ~SoundProviderPcm();
};

#endif
