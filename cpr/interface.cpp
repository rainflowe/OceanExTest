#include "cpr/interface.h"

namespace cpr {

const char* Interface::GetInterface() const noexcept {
    return interface_.data();
}

} // namespace cpr
