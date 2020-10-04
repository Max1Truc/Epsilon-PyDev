#include "launch_usb_controller.h"
#include <assert.h>

namespace LaunchUSB {

LaunchUsbController::LaunchUsbController(Responder * parentResponder) :
  ViewController(parentResponder)
{
}

View * LaunchUsbController::view() {
  return &m_launchUsbView;
}

void LaunchUsbController::didBecomeFirstResponder() {
}

bool LaunchUsbController::handleEvent(Ion::Events::Event event) {
  m_launchUsbView.updateText();

  if (event == Ion::Events::OK || event == Ion::Events::EXE) {
    Ion::USB::enable();
    return true;
  }
  
  return false;
}

}