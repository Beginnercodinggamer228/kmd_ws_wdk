#include <ntddk.h>

DRIVER_INITIALIZE DriverEntry;

NTSTATUS
DriverEntry(
    _In_ PDRIVER_OBJECT  DriverObject,
    _In_ PUNICODE_STRING RegistryPath
    )
{
    UNREFERENCED_PARAMETER(RegistryPath);
    
    DbgPrint("HelloDriver: DriverEntry called\n");
    
    DriverObject->DriverUnload = NULL;
    
    return STATUS_SUCCESS;
}