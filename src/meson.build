pulseeffects_sources = [
	'pulseeffects.cpp',
	'application.cpp',
	'application_ui.cpp',
	'spectrum_ui.cpp',
	'spectrum_preset.cpp',
	'spectrum_settings_ui.cpp',
	'pulse_settings_ui.cpp',
	'blacklist_settings_ui.cpp',
	'general_settings_ui.cpp',
	'pulse_manager.cpp',
	'effects_base_ui.cpp',
	'app_info_ui.cpp',
	'pulse_info_ui.cpp',
	'sink_input_effects_ui.cpp',
	'sink_input_effects.cpp',
	'source_output_effects_ui.cpp',
	'source_output_effects.cpp',
	'pipeline_base.cpp',
	'plugin_base.cpp',
	'plugin_ui_base.cpp',
	'autogain.cpp',
	'autogain_ui.cpp',
	'limiter.cpp',
	'limiter_ui.cpp',
	'compressor.cpp',
	'compressor_ui.cpp',
	'multiband_compressor.cpp',
	'multiband_compressor_ui.cpp',
	'filter.cpp',
	'filter_ui.cpp',
	'equalizer.cpp',
	'equalizer_ui.cpp',
	'reverb.cpp',
	'reverb_ui.cpp',
	'bass_enhancer.cpp',
	'bass_enhancer_ui.cpp',
	'exciter.cpp',
	'exciter_ui.cpp',
	'crossfeed.cpp',
	'crossfeed_ui.cpp',
	'loudness.cpp',
	'loudness_ui.cpp',
	'maximizer.cpp',
	'maximizer_ui.cpp',
	'gate.cpp',
	'gate_ui.cpp',
	'multiband_gate.cpp',
	'multiband_gate_ui.cpp',
	'stereo_tools.cpp',
	'stereo_tools_ui.cpp',
	'deesser.cpp',
	'deesser_ui.cpp',
	'convolver.cpp',
	'convolver_ui.cpp',
	'pitch.cpp',
	'pitch_ui.cpp',
	'webrtc.cpp',
	'webrtc_ui.cpp',
	'crystalizer.cpp',
	'crystalizer_ui.cpp',
	'delay.cpp',
	'delay_ui.cpp',
	'delay_preset.cpp',
	'presets_menu_ui.cpp',
	'presets_manager.cpp',
	'autogain_preset.cpp',
	'limiter_preset.cpp',
	'compressor_preset.cpp',
	'multiband_compressor_preset.cpp',
	'bass_enhancer_preset.cpp',
	'crossfeed_preset.cpp',
	'deesser_preset.cpp',
	'equalizer_preset.cpp',
	'exciter_preset.cpp',
	'filter_preset.cpp',
	'gate_preset.cpp',
	'multiband_gate_preset.cpp',
	'maximizer_preset.cpp',
	'loudness_preset.cpp',
	'convolver_preset.cpp',
	'pitch_preset.cpp',
	'reverb_preset.cpp',
	'stereo_tools_preset.cpp',
	'webrtc_preset.cpp',
	'crystalizer_preset.cpp',
	'calibration_ui.cpp',
	'calibration_signals_ui.cpp',
	'calibration_signals.cpp',
	'calibration_mic_ui.cpp',
	'calibration_mic.cpp',
	'realtime_kit.cpp',
	'util.cpp',
	gresources
]

pulseeffects_deps = [
	dependency('libpulse'),
	dependency('glib-2.0', version: '>=2.56'),
	dependency('glibmm-2.4', version: '>=2.56'),
	dependency('gtk+-3.0', version: '>=3.20'),
	dependency('gtkmm-3.0', version: '>=3.24'),
	dependency('sigc++-2.0', version: ['>=2.10', '<3']),
	dependency('gstreamer-1.0', version: '>=1.12.5'),
	dependency('gstreamer-plugins-bad-1.0', version: '>=1.12.5'),
	dependency('gstreamer-fft-1.0'),
	dependency('lilv-0', version: '>=0.22', required: false),
	dependency('libbs2b', required: false),
	dependency('boost', version: '>=1.72', modules:['system','filesystem']),
	dependency('sndfile'),
	dependency('threads')
]

executable(
	meson.project_name(),
	pulseeffects_sources,
	include_directories : [include_dir,config_h_dir],
	dependencies : pulseeffects_deps,
	install: true
)

subdir('convolver')
subdir('crystalizer')
subdir('autogain')
subdir('adapter')
