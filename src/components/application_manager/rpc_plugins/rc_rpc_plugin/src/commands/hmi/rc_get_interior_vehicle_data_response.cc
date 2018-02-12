#include "rc_rpc_plugin/commands/hmi/rc_get_interior_vehicle_data_response.h"
#include "utils/macro.h"

namespace rc_rpc_plugin {
namespace commands {

RCGetInteriorVehicleDataResponse::RCGetInteriorVehicleDataResponse(
    const app_mngr::commands::MessageSharedPtr& message,
    app_mngr::ApplicationManager& application_manager)
    :app_mngr::commands::ResponseToHMI(message, application_manager) {}

bool RCGetInteriorVehicleDataResponse::Init() {
  return true;
}
void RCGetInteriorVehicleDataResponse::Run() {}
void RCGetInteriorVehicleDataResponse::on_event(
    const application_manager::event_engine::Event& event) {}

}  // namespace commands
}  // namespace rc_rpc_plugin