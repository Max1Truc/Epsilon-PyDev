#include "app.h"
#include "apps/apps_container.h"
#include "launch_usb_icon.h"
#include "apps/i18n.h"
#include <assert.h>

namespace LaunchUSB {

I18n::Message App::Descriptor::name() {
  return I18n::Message::LaunchUSBApp;
}

I18n::Message App::Descriptor::upperName() {
  return I18n::Message::LaunchUSBAppCapital;
}

const Image * App::Descriptor::icon() {
  return ImageStore::LaunchUsbIcon;
}

App::Snapshot::Snapshot()
{
}

App * App::Snapshot::unpack(Container * container) {
  return new (container->currentAppBuffer()) App(this);
}

App::Descriptor * App::Snapshot::descriptor() {
  static Descriptor descriptor;
  return &descriptor;
}

void App::Snapshot::reset() {
}

App::App(Snapshot * snapshot) :
  ::App(snapshot, &m_launchUsbController),
  m_launchUsbController(this)
{
}

}