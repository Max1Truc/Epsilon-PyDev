#ifndef APPS_LAUNCH_USB_CONTROLLER_H
#define APPS_LAUNCH_USB_CONTROLLER_H

#include <escher.h>
#include "launch_usb_view.h"

namespace LaunchUSB {

class LaunchUsbController : public ViewController {
public:
  LaunchUsbController(Responder * parentResponder);
  View * view() override;
  bool handleEvent(Ion::Events::Event event) override;
  void didBecomeFirstResponder() override;
private:
  LaunchUsbView m_launchUsbView;
};

}

#endif