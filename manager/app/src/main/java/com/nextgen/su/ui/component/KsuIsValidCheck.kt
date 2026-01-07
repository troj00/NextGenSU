package com.nextgen.su.ui.component

import androidx.compose.runtime.Composable
import com.nextgen.su.Natives
import com.nextgen.su.ksuApp

@Composable
fun KsuIsValid(
    content: @Composable () -> Unit
) {
    val isManager = Natives.isManager
    val ksuVersion = if (isManager) Natives.version else null

    if (ksuVersion != null) {
        content()
    }
}
