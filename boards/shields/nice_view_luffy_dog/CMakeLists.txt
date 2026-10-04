if(CONFIG_ZMK_DISPLAY AND CONFIG_NICE_VIEW_WIDGET_STATUS)
  zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)

  zephyr_library_sources(custom_status_screen.c)
  zephyr_library_sources(assets/images.c)
  zephyr_library_sources(assets/pixel_operator_mono_small.c)
  zephyr_library_sources(widgets/battery.c)
  zephyr_library_sources(widgets/output.c)
  zephyr_library_sources(widgets/util.c)

  zephyr_library_sources(assets/right_image.c)
  zephyr_library_sources(widgets/draw_right_image.c)
  zephyr_library_sources(widgets/screen_peripheral.c)
endif()
