apps += LaunchUSB::App
app_headers += apps/launch_usb/app.h

app_launch_usb_src = $(addprefix apps/launch_usb/,\
  app.cpp \
  launch_usb_controller.cpp \
  launch_usb_view.cpp \
)

app_launch_usb_src += $(app_launch_usb_test_src)
apps_src += $(app_launch_usb_src)

i18n_files += $(call i18n_without_universal_for,launch_usb/base)

$(eval $(call depends_on_image,apps/launch_usb/app.cpp,apps/launch_usb/launch_usb_icon.png))
